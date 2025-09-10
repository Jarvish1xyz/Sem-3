import Navbar from "./Navbar";
// import Find from "./Find";
import { Outlet } from "react-router-dom";

function Home() {
    return (
        <>
            <Navbar/>
            <Outlet/>
        </>
    );
}

export default Home;