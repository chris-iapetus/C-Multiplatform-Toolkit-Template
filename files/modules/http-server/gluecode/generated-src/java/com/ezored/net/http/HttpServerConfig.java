// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from proj.djinni

package com.ezored.net.http;

public final class HttpServerConfig implements android.os.Parcelable {


    /*package*/ final int mPort;

    /*package*/ final String mStaticPath;

    public HttpServerConfig(
            int port,
            String staticPath) {
        this.mPort = port;
        this.mStaticPath = staticPath;
    }

    public int getPort() {
        return mPort;
    }

    public String getStaticPath() {
        return mStaticPath;
    }

    @Override
    public String toString() {
        return "HttpServerConfig{" +
                "mPort=" + mPort +
                "," + "mStaticPath=" + mStaticPath +
        "}";
    }


    public static final android.os.Parcelable.Creator<HttpServerConfig> CREATOR
        = new android.os.Parcelable.Creator<HttpServerConfig>() {
        @Override
        public HttpServerConfig createFromParcel(android.os.Parcel in) {
            return new HttpServerConfig(in);
        }

        @Override
        public HttpServerConfig[] newArray(int size) {
            return new HttpServerConfig[size];
        }
    };

    public HttpServerConfig(android.os.Parcel in) {
        this.mPort = in.readInt();
        this.mStaticPath = in.readString();
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(android.os.Parcel out, int flags) {
        out.writeInt(this.mPort);
        out.writeString(this.mStaticPath);
    }

}
