using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System;

public class TrainingHazardController : MonoBehaviour {

	public TrainingHazard hazard;

	public HazardIconController icon;
	public HazardContentView content;
	public TrainingCollectionCell cell;

	private State currentState;

	// Use this for initialization
	void Start () {
		if(this.hazard == null) {
			this.hazard = new TrainingHazard("laddes", "hey there");
		}
		this.icon = this.GetComponentInChildren<HazardIconController>();
		this.icon.setColor(this.hazard.color);
		this.content = this.GetComponentInChildren<HazardContentView>();
		SetState(new HazardOffState(this));
	}
	
	// Update is called once per frame
	void Update () {
		if(currentState is HazardOnState) {
			this.hazard.incrementDuration();
		}
	}

	public void setColor(Color color) {
		print("COLOR GOT CALLED!");
	}

	public void setVisibility(bool enabled) {
		this.content.setContentVisibilty(enabled);
	}
	
	public void SetState(State state)
    {
        if (currentState != null)
            currentState.OnStateExit();

        currentState = state;

        if (currentState != null)
            currentState.OnStateEnter();
    }
	
	public State ToggleState() {
		State newState = null;
		if (currentState is HazardOffState) {
			newState = new HazardOnState(this);
		} else if (currentState is HazardOnState) {
			newState = new HazardOffState(this);
		}
		SetState(newState);
		return newState;
	}

	public void SetStateOff() {
		if (currentState is HazardOnState) {
			this.ToggleState();
		}
	}
}
