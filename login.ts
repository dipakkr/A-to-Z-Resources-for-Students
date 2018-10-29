import { Component } from '@angular/core';
import { IonicPage, NavController, NavParams, AlertController } from 'ionic-angular';
import { User } from '../../app/Model/user';
import { HomePage } from '../home/home';
//import * as firebase from 'firebase';
import { AngularFireAuth } from "angularfire2/auth";
import { MessageService } from '../../providers/message/message';
import { SignupPage } from '../signup/signup';

@IonicPage()
@Component({
  selector: 'page-login',
  templateUrl: 'login.html',
})
export class LoginPage {

  public user = {} as User;
  public isAuthenticated : boolean;

  constructor(private afAuth: AngularFireAuth,public navCtrl: NavController, public navParams: NavParams, private mesgService:MessageService,public alertCtrl:AlertController) {
  }

  signUp()
  {
    this.navCtrl.push(SignupPage);
  }


  async login()
  {
    this.mesgService.showLoading();
    await this.afAuth.auth.signInWithEmailAndPassword(this.user.email,this.user.password).then( () => {
      if(this.afAuth.auth.currentUser.emailVerified)
    {
      console.log("Successfully logged In");
      this.navCtrl.setRoot(HomePage);
    }
    else
    { 
      this.mesgService.PopUp('error','Please verify your email first');
      this.mesgService.loading.dismiss();
    } 
    }).catch(error =>{
       this.mesgService.loading.dismiss();
      this.mesgService.PopUp('error',error);
     })
    

  }

  forgotPassword()
  {
    
      let alert = this.alertCtrl.create({
        title: 'Change Password',
        inputs: [
          {
            name: 'email',
            placeholder: 'enter your email'
          },
       /*   {
            name: 'password',
            placeholder: 'Password',
            type: 'password'
          }*/
        ],
        buttons: [
          {
            text: 'Cancel',
            role: 'cancel',
            handler: data => {
             this.mesgService.Toast("change password request cancelled.")
            }
          },
          {
            text: 'Send',
            handler: data => {
              this.afAuth.auth.sendPasswordResetEmail(data.email).then(()=>{
                this.mesgService.Toast("Reset password link has been sent on your email address")
              }).catch((er)=>{
                console.error(er);
                this.mesgService.PopUp("oops!","entered email address is not registered")
              })
            }
          }
        ]
      });
      alert.present();
  }



  ionViewDidLoad() {
    console.log('ionViewDidLoad LoginPage');
  }

  ifEmpty() : boolean
  {
    if(this.user.password && this.user.email)
      return false;
    else  
     return true;
  }

}
