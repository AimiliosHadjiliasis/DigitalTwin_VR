using UnityEngine;

public static class Info
{
    public static string UseName
    {
        get => PlayerPrefs.GetString("username");
        set => PlayerPrefs.SetString("username", value);
    }

    public static string PassWord
    {
        get => PlayerPrefs.GetString("password");
        set => PlayerPrefs.SetString("password", value);
    }

    public static string Token
    {
        get => PlayerPrefs.GetString("token");
        set => PlayerPrefs.SetString("token", value);
    }

    public static string UserID
    {
        get => PlayerPrefs.GetString("userID");
        set => PlayerPrefs.SetString("userID", value);
    }
    public static string walletAddress
    {
        get => PlayerPrefs.GetString("updatewalletaddress");
        set => PlayerPrefs.SetString("updatewalletaddress", value);
    }
}
