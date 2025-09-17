import { useParams } from "react-router-dom";
import { useEffect, useState } from "react";
import { useNavigate } from "react-router-dom";

function Stu() {
    const { id } = useParams();

    const [data, setData] = useState([]);
    const navigate = useNavigate();

    useEffect(() => {
        fetch('https://68c8f5beceef5a150f62e664.mockapi.io/students/' + id)
            .then((res) => (res.json()))
            .then((res) => setData(res));
    }, []);

    const goUpdate = (id) => {
        navigate(`/update/${id}`);
    }

    const goDelete = (id) => {
        let c = confirm("Are you sure to delete this data?");
        if(c) {
            fetch('https://68c8f5beceef5a150f62e664.mockapi.io/students/' + id, {
                method:'DELETE'
            });
            navigate('/');
            window.location.reload();
        }
    }

    return (
        <>
            <div class="card" style={{width: '18rem'}}>
                <img src={data.avatar} class="card-img-top" alt="..."/>
                    <div class="card-body">
                        <h5 class="card-title">{data.name}</h5>
                        <p class="card-text">{data.email}</p>
                        <button onClick={() => {goUpdate(id)}} class="m-2 btn btn-primary">Update</button>
                        <button onClick={() => {goDelete(id)}} class="m-2 btn btn-primary">Delete</button>
                    </div>
            </div>
        </>
    );
}

export default Stu;