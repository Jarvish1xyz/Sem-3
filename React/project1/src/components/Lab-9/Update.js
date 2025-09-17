import { useParams } from "react-router-dom";
import { useEffect, useState } from "react";
import { useNavigate } from "react-router-dom";

function Update() {
    const { id } = useParams();

    const [data, setData] = useState({
        name: '',
        id: ''
    });
    const navigate = useNavigate();

    useEffect(() => {
        fetch('https://68c8f5beceef5a150f62e664.mockapi.io/students/' + id)
            .then((res) => (res.json()))
            .then((res) => setData(res));
    }, [id]);

    const updateData = async()=> {
        await fetch('https://68c8f5beceef5a150f62e664.mockapi.io/students/' + id, {
            method: 'PUT',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify(data)
        });
        navigate(`/student/${id}`);
    }

    const handleSubmit = (e) => {
        e.preventDefault();
        updateData();
    }

    return (
        <>
            <form>
                <div class="mb-3">
                    <label for="exampleInputEmail1" class="form-label">Name</label>
                    <input onChange={(e)=>{setData({...data, [e.target.name]: e.target.value})}} name="name" type="text" class="form-control" id="exampleInputEmail1" value={data.name}/>
                </div>
                <div class="mb-3">
                    <label for="exampleInputPassword1" class="form-label">ID</label>
                    <input onChange={(e)=>{setData({...data, [e.target.name]: e.target.value})}} name="id" type="text" class="form-control" id="exampleInputPassword1" value={data.id}/>
                </div>
                <div class="mb-3 form-check">
                    <input type="checkbox" class="form-check-input" id="exampleCheck1"/>
                        <label class="form-check-label" for="exampleCheck1">Check me out</label>
                </div>
                <button onClick={handleSubmit} type="submit" class="btn btn-primary">Submit</button>
            </form>
        </>
    );
}

export default Update;