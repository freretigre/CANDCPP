/**
 Java 变长参数
 */
 package com.bennyhuo.test;

 public class Varargs {
    public static void main(String ...args){
        for(int i = 0; i < args.length; i++>){
            System.out.println(args[i]);
        }
    }

 }
