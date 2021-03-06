/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKGestureCameraBehavior : NSObject <VKGesturingCameraController> {
    VKCameraController * _cameraController;
    int  _flyoverMode;
    double  _lastRotation;
    BOOL  _notifyCameraStateChanges;
    struct CGPoint { 
        float x; 
        float y; 
    }  _panLastScreenPoint;
    struct CGPoint { 
        float x; 
        float y; 
    }  _panStartFocusPoint;
    struct CGPoint { 
        float x; 
        float y; 
    }  _panStartScreenPoint;
    BOOL  _panning;
    struct CGPoint { 
        float x; 
        float y; 
    }  _pinchStartFocusPoint;
    BOOL  _pinching;
    struct CGPoint { 
        float x; 
        float y; 
    }  _pitchStartFocusPoint;
    struct CGPoint { 
        float x; 
        float y; 
    }  _pitchStartScreenPoint;
    BOOL  _pitching;
    struct CGPoint { 
        float x; 
        float y; 
    }  _rotateStartFocusPoint;
    BOOL  _rotating;
    BOOL  _shouldRotationRubberband;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)beginPan:(struct CGPoint { float x1; float x2; })arg1;
- (void)beginPitch:(struct CGPoint { float x1; float x2; })arg1;
- (void)beginRotate:(struct CGPoint { float x1; float x2; })arg1;
- (void)beginZoom:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (void)endPan:(struct CGPoint { float x1; float x2; })arg1;
- (void)endPitch:(struct CGPoint { float x1; float x2; })arg1;
- (void)endRotate:(struct CGPoint { float x1; float x2; })arg1;
- (void)endZoom:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithCameraController:(id)arg1;
- (BOOL)isGesturing;
- (BOOL)isPanning;
- (BOOL)isPinching;
- (BOOL)isPitching;
- (BOOL)isRotating;
- (void)setFlyoverMode:(int)arg1;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1 panAtStartPoint:(BOOL)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)tapZoom:(struct CGPoint { float x1; float x2; })arg1 levels:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)transferGestureState:(id)arg1;
- (void)updatePan:(struct CGPoint { float x1; float x2; })arg1 lastScreenPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitch:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (void)updateZoom:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id /* block */)arg3;

@end
