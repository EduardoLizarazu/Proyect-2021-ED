
// SCREEN
const heightWindow = window.innerHeight;

const getHeader = document.getElementById("header");
const getHeaderStyle = window.getComputedStyle(getHeader);
const getHeaderHeight = getHeaderStyle.getPropertyValue("height");

const getHeaderHeightNum = parseInt(getHeaderHeight.replace("px", ""));

const getMain = document.getElementById("main");
getMain.style.height = `${heightWindow - getHeaderHeightNum}px`;
 

const getButtonStart = document.getElementById("button-start");
getButtonStart.onclick = displayBlur;
function displayBlur() {
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

