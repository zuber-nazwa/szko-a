package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
      //  View textView = (TextView)findViewById(R.id.textView);
      //  nigger.wys(textView);
    }


public static void wys(View view){
    TextView view1 = (TextView)view.findViewById(R.id.textView);
    view1.setText(nigger.Nigga());
}
}
