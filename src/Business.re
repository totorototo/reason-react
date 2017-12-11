type frame_type =
  | Mtb
  | Cross
  | TimeTrial
  | Road;

type shoe = {
    id: int,
    name: string,
    distance: float,
    brand_name: string,
    model_name: string
};

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

type map = { 
    id: int,
    polyline: string,
    summary_polyline: string
};

type activity_type = 
  | Run
  | Swin
  | Ride;  

type activity = {
    id: int,
    name: string,
    description: string,
    distance: float,
    elapsed_time: int,
    total_elevation_gain: float,
    type: activity_type,
    kudos_count: int,
    comment_count: int,
    map
};

type athlete = {
    id: int,
    firstname: string,
    lastname: string,
    bikes: list(bike),
    shoes: list(shoe),
    clubs: list(club),
    activities: list(activity)
};