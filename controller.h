#ifndef COGNITION_CONTROLLER_H
#define COGNITION_CONTROLLER_H

namespace cognition
{
	class Detector;

	/*!
	 * \brief
	 * Interface objects for that want to receive status change notifications from detectors
	 * 
	 * Subclass Controller and register the object to a detector. You will then receive updates
	 * form the detector as they are available.
	 * 
	 */
	class controller
	{
	public:
	
		/*!
		 * \brief
		 * This method will be called when a detector has an update
		 * 
		 * \param detector the detector that has an updated status
		 */
		virtual void stateChanged(Detector *detector) = 0;
	};

}

#endif //COGNITION_CONTROLLER_H
