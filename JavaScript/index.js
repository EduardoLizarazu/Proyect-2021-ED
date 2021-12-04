
// SCREEN
const heightWindow = window.innerHeight;

const getHeader = document.getElementById("header");
const getHeaderStyle = window.getComputedStyle(getHeader);
const getHeaderHeight = getHeaderStyle.getPropertyValue("height");

const getHeaderHeightNum = parseInt(getHeaderHeight.replace("px", ""));

const getMain = document.getElementById("main");
getMain.style.height = `${heightWindow - getHeaderHeightNum}px`;
 

const getButtonStart = document.getElementById("button-start");

// DISPLAY BLUR IMG INDEX
getButtonStart.addEventListener("click", displayBlurImgIndex)
function displayBlurImgIndex() {
    console.log("displayBlur");
    const getImgBg = document.getElementById("bg-img--index");
    let id = null;
    let pos = 0;
    // clearInterval(id);
    id = setInterval(frame, 50);
    function frame () {
        if (pos == 10) {
            clearInterval(id);
        } else {
            pos++;
            getImgBg.style.filter = `blur(${pos}px)`;
        }
    }
}

// SCALE BUTTON START
getButtonStart.addEventListener("click", displayScaleButtonStart);
function displayScaleButtonStart () {
    console.log("displayScaleButtonStart")
    let id = null;
    let pos = 0;
    id = setInterval(frame, 5);
    function frame () {
        if(pos == .5) {
            clearInterval(id);
        } else {
            pos += .1
            getButtonStart.style.transform = `scale(${pos})`
        }
    }
}

// HIDDEN BUTTON
getButtonStart.addEventListener("click", hiddenButtonStart);
function hiddenButtonStart () {
    console.log("hiddenButon");
    getButtonStart.style.visibility = "hidden";
}

// OPACITY FORM
getButtonStart.addEventListener("click", displayFormOpacityOn);
function displayFormOpacityOn () {
    const getLoginForm = document.getElementById("login-form");
    getLoginForm.style.visibility = "visible";
    let id = null;
    let pos = 0;
    id = setInterval(frame, 50);
    function frame () {
        if (pos == 1) {
            clearInterval(id);
        } else {
            pos += .2;
            getLoginForm.style.opacity = `${pos}`;
            console.log(pos);
        }
    }
}



