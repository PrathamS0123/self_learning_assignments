let b = 
{
	id : 123,
	name : "Pratham",
	email : "Pratham123@gmail.com"
	}
	
	for(const show in b)
	{
		if(Object.hasOwn(b,show))
		{
			const element = b[show];
			console.log(element);
		}
	}
			