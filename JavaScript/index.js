
// SCREEN
const heightWindow = window.innerHeight;

const getHeader = document.getElementById("header");
const getHeaderStyle = window.getComputedStyle(getHeader);
const getHeaderHeight = getHeaderStyle.getPropertyValue("height");

const getHeaderHeightNum = parseInt(getHeaderHeight.replace("px", ""));

const getMain = document.getElementById("main");
getMain.style.height = `${heightWindow - getHeaderHeightNum}px`;
 


