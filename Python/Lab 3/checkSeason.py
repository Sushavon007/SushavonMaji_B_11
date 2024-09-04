month = input("Enter the current month: ")

month = month.lower()
if month in ['october', 'november']:
    print("It's Autumn") 
elif month in ['december', 'january', 'february']:
    print("It's Winter") 
elif month in ['march', 'april', 'may']:
    print("It's Spring")
elif month in ['june', 'july']:
    print("It's Summer")
elif month in ['september', 'august']:
    print("It's Monsoon")
else:
    print("Invalid month") 