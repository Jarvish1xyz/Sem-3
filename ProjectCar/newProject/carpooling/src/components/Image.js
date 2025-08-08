import '../style/Image.css';
import IMG from '../Images/420-2560x1700-desktop-hd-call-of-duty-wallpaper-photo.jpg';


function Image() {
    return (
        <>
            <div>
                <img src={IMG} className="img-fluid" alt="JustImg"/>
            </div>
        </>
    );
}

export default Image;