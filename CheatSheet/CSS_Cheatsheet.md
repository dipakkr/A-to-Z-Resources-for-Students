# CSS Properties and Values Cheatsheet

## Introduction

This cheatsheet provides a quick reference for common CSS properties and values used in web development.

## Selectors

- **Element Selector:**
  ```css
  element
  {
    property: value;
  }
  
  Example: p { color: blue; }

- **Class Selector:**
  ```css
  .classname
  {
    property: value;
  }
  
  Example: .highlight { background-color: yellow; }

- **ID Selector:**
  ```css 
  #idname
  {
    property: value;
  }
  
  Example: #header { font-size: 24px; }
  
- **Universal Selector:**
  ```css
  * {
    property: value;
    }
  
  Example: * { margin: 0; }

- **Descendant Selector:**
  ```css
  ancestor descendant
  {
  styles
  }
  
  Example: article p { font-style: italic; }

- **Child Selector:**
  ```css
  parent > child
  {
   styles
  }
  
  Example: nav > ul { list-style-type: none; }
  
- **Attribute Selector:**
  ```css
  element[attribute="value"]
  {
   styles
  }
  
  Example: input[type="text"] { width: 200px; }
  
## Box Model

- **Width and Height:**
  ```css
  width: value;
  height: value;

- **Margin:**
  ```css
  margin: top right bottom left;
  
  Example: margin: 10px;
  
- **Padding:**
  ```css
  padding: top right bottom left;
  
  Example: padding: 10px;
  
- **Border:**
  ```css
  border: width style color;
  
  Example: border: 2px solid #000;
  
## Typography

- **Font Family:**
  ```css
  font-family: 'Font Name', sans-serif;
  
  Example: font-family: 'Arial', sans-serif;

- **Font Size:**
  ```css
  font-size: value;
  
  Example: font-size: 16px;

- **Font Weight:**
  ```css
  font-weight: normal | bold;
  
- **Text Alignment:**
  ```css
  text-align: left | center | right;

- **Line Height:**
  ```css
  line-height: value;
  
  Example: line-height: 1.5;

- **Text Decoration:**
  ```css
  text-decoration: value;
  
  Example: text-decoration: underline;

- **Text Transform:**
  ```css
  text-transform: value;
  
  Example: text-transform: uppercase;

## Color
- **Color:**
  ```css
  color: #RRGGBB;
  
- **Background Color:**
  ```css
  background-color: #RRGGBB;

- **Border Color:**
  ```css
  border-color: value;
  
  Example: border-color: #333;

- **RGB Values:**
  ```css
  color: rgb(255, 0, 0);

- **RGBA Values:**
  ```css
  background-color: rgba(255, 0, 0, 0.5);

- **HSL Values:**
  ```css
  color: hsl(120, 100%, 50%);

- **HSLA Values:**
  ```css
  background-color: hsla(120, 100%, 50%, 0.5);
  
## Layout
- **Display:**
  ```css
  display: block | inline | inline-block | flex | grid;

- **Position:**
  ```css
  position: static | relative | absolute | fixed;

- **Float:**
  ```css
  float: left | right | none;

- **Visibility:**
  ```css
  visibility: visible | hidden | collapse;

- **Clear:**
  ```css
  clear: left | right | both | none;

- **Flexbox:**
  ```css
  display: flex;

- **Grid:**
  ```css
  display: grid;

## Flexbox Properties
- **Flex Container:**
  ```css
  display: flex;

- **Flex Direction:**
  ```css
  flex-direction: row | column | row-reverse | column-reverse;

- **Flex Wrap:**
  ```css
  flex-wrap: nowrap | wrap | wrap-reverse;
 
- **Justify Content:**
  ```css
  justify-content: flex-start | flex-end | center | space-between | space-around;

- **Align Content:**
  ```css
  align-content: stretch | flex-start | flex-end | center | space-between | space-around;

- **Align Items:**
  ```css
  align-items: stretch | flex-start | flex-end | center | baseline;

## Transition and Animation
- **Transition:**
  ```css
  transition: property duration timing-function delay;

- **Keyframes Animation:**
  ```css
  @keyframes animation-name {
  0% { property: value; }
  100% { property: value; }
  }

  animation: animation-name duration timing-function delay iteration-count direction fill-mode;

## Miscellaneous
- **Box Shadow:**
  ```css
  box-shadow: h-offset v-offset blur spread color;

- **Opacity:**
  ```css
  opacity: value; /* 0.0 to 1.0 */

- **Z-Index:**
  ```css
  z-index: value;

- **Overflow:**
  ```css
  overflow: visible | hidden | scroll | auto;

- **Cursor:**
  ```css
  cursor: pointer | default | text | grab | not-allowed;

## Conclusion
This cheatsheet covers some fundamental CSS properties and values. Experiment and explore these to enhance the styling of HTML documents.


