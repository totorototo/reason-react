type shoe = {
    id: int,
    name: string,
    distance: float,
    brand_name: string,
    model_name: string
};

type frame_type =
  | Mtb
  | Cross
  | TimeTrial
  | Road;

type bike = {
    id: int,
    name: string,
    distance: float,
    brand_name: string,
    model_name: string,
    frame_type
};

type club = {
    id: int,
    name: string,
    profile: string,
    description: string,
    member_count: int    
};

type activity_type = 
  | Run
  | Swin
  | Ride; 

type map = { 
    id: int,
    polyline: string,
    summary_polyline: string
};
  
type activity = {
    id: int,
    elevation_gain: float,
    activity_type,
    distance: float,
    elapsed_time: int,
    total_elevation_gain: float,
    kudos_count: int,
    comment_count: int,
    map
};

type athlete = {
    id: int,
    firstname: string,
    lastname: string,
    shoes: list(shoe),
    bikes: list(bike), 
    clubs: list(club),
    activities: list(activity)
};