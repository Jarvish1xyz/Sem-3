import '../style/Find.css';


function Find() {
    return (
        <>
            <div className="body">
                <div className="left">

                </div>
                <div className="right">
                    <div className="box">
                        <form>
                            <div className='row'>
                                <div className='col'>
                                    <div className="mb-3">
                                        <input type="text" className="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder='From...' />
                                    </div>
                                </div>
                            </div>
                            <div className='row'>
                                <div className='col'>
                                    <div className="mb-3">
                                        <input type="text" className="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder='To...' />
                                    </div>
                                </div>
                            </div>
                            <div className='row'>
                                <div className='col'>
                                    <div className="mb-3">
                                        <input type="date" className="form-control" id="exampleInputEmail1" aria-describedby="emailHelp" placeholder='Date...' />
                                    </div>
                                </div>
                                <div className='col'>
                                    <div className="mb-3">
                                        <select className="form-select" aria-label="Default select example">
                                            <option selected disabled>No. of Passengers</option>
                                            <option value="1">1</option>
                                            <option value="2">2</option>
                                            <option value="3">3</option>
                                        </select>
                                    </div>
                                </div>
                            </div>
                            <div className='row'>
                                <div className='col d-flex justify-content-center align-items-center'>
                                    <button type="submit" className="btn btn-outline-primary">Submit</button>
                                </div>
                            </div>
                        </form>
                    </div>
                </div>
            </div>
        </>
    );
}

export default Find;