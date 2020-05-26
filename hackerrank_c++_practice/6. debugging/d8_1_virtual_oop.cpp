//The virtual keyword basically tells the method that, there may be other methods in other classes that uses the same name!
//So use that one instead.
//So in this case, you see how both classes have a method which has the same name? int get_price().
//If we don't add the virtual keyword, then HotelRoom's int get_price() will always get called as it is the parent class.
//The virtual keyword tells the compiler to see if HotelApartment, which is a child of HotelRoom, has int get_price(),
//and if it does, use that one instead!