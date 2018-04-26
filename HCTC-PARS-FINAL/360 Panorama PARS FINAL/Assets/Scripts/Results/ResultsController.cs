using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResultsController : MonoBehaviour {

	public ResultCardCell ResultCardCell;
	public AssessmentController controller;

	// Use this for initialization
	void Start () {
		controller = FindObjectOfType(typeof(AssessmentController)) as AssessmentController;
		foreach (AssessmentRound result in controller.finishedRounds) {
			var newCell = Instantiate(ResultCardCell, transform);
			newCell.transform.parent = transform;
			newCell.populateAssessmentResults(result, controller.answerKey);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void endSession() {
		DestroyImmediate(controller.gameObject, true);
	}
}
