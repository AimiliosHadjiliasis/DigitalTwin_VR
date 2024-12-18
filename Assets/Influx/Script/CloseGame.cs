using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseGame : MonoBehaviour
{
    public GameObject closeMenu;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.LeftControl) && Input.GetKey(KeyCode.X) || TiltFive.Input.GetButton(TiltFive.Input.WandButton.X) && TiltFive.Input.GetButton(TiltFive.Input.WandButton.Y))
        {
            closeMenu.SetActive(true);
        }
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public void CloseMenu()
    {
        closeMenu.SetActive(false);
    }
}
