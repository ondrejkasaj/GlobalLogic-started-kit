#!/bin/bash
while :
do
    read INPUT </div/rfcomm0

    TEMPERATURE=${INPUT:1:2}
    HUMIDITY=${INPUT:4:2}

    sudo -U postgrs psql grafana -c << EOF
    insert into samples (temperature, humidity, timestamp) 
    values ($TEMPERATURE, $HUMIDITY, NOW())"
EOF
done