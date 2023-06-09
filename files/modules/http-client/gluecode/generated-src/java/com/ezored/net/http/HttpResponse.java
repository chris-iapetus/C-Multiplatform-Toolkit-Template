// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

package com.ezored.net.http;

import java.util.ArrayList;

public final class HttpResponse implements android.os.Parcelable {


    /*package*/ final int mCode;

    /*package*/ final String mBody;

    /*package*/ final String mUrl;

    /*package*/ final ArrayList<HttpHeader> mHeaders;

    public HttpResponse(
            int code,
            String body,
            String url,
            ArrayList<HttpHeader> headers) {
        this.mCode = code;
        this.mBody = body;
        this.mUrl = url;
        this.mHeaders = headers;
    }

    public int getCode() {
        return mCode;
    }

    public String getBody() {
        return mBody;
    }

    public String getUrl() {
        return mUrl;
    }

    public ArrayList<HttpHeader> getHeaders() {
        return mHeaders;
    }

    @Override
    public String toString() {
        return "HttpResponse{" +
                "mCode=" + mCode +
                "," + "mBody=" + mBody +
                "," + "mUrl=" + mUrl +
                "," + "mHeaders=" + mHeaders +
        "}";
    }


    public static final android.os.Parcelable.Creator<HttpResponse> CREATOR
        = new android.os.Parcelable.Creator<HttpResponse>() {
        @Override
        public HttpResponse createFromParcel(android.os.Parcel in) {
            return new HttpResponse(in);
        }

        @Override
        public HttpResponse[] newArray(int size) {
            return new HttpResponse[size];
        }
    };

    public HttpResponse(android.os.Parcel in) {
        this.mCode = in.readInt();
        this.mBody = in.readString();
        this.mUrl = in.readString();
        this.mHeaders = new ArrayList<HttpHeader>();
        in.readList(this.mHeaders, getClass().getClassLoader());
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(android.os.Parcel out, int flags) {
        out.writeInt(this.mCode);
        out.writeString(this.mBody);
        out.writeString(this.mUrl);
        out.writeList(this.mHeaders);
    }

}
