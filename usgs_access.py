import urllib.request
import pprint
import json

link = "https://earthquake.usgs.gov/fdsnws/event/1/query?format=geojson&starttime=2018-02-23&orderby=magnitude"
x = urllib.request.urlopen(link)
data = x.read()
parsed_data = json.loads(data.decode())
pprint.pprint(parsed_data)
#print(x.read())

import datetime
print(
    datetime.datetime.fromtimestamp(
        int("1519356676")
    ).strftime('%Y-%m-%d %H:%M:%S')
)