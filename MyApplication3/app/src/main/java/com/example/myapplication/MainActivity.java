package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    boolean on = false;

    public void pranie(View view){
        TextView view2 = (TextView) findViewById(R.id.textView4);
       EditText numer = (EditText)findViewById(R.id.editTextNumber);
      if(numer.getText() != null) {
          String text = numer.getText().toString();
          int numerprania = Integer.parseInt(text);

          if (numerprania <= 12 && numerprania > 0) {
              String cos = "numer prania";

              view2.setText(cos + " " + numerprania);
          } else {

              view2.setText("podano nie porawny numer");
          }
      }else {

          view2.setText("podano nie porawny numer");
      }



    }
public void odkurzanie(View view1){
        TextView view= (TextView)findViewById(R.id.textView5);
     Button przycisk = (Button)findViewById(R.id.button);
        if(on == false){
            on = true;
            view.setText("Odkurzacz włączony");
            przycisk.setText("Wyłącz");

        }else if(on == true){
            on = false;
            view.setText("Odkurzacz wyłączony");
            przycisk.setText("Włącz");
        }


}


}