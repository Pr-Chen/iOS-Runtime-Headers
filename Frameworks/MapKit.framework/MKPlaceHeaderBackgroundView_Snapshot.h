/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate> {
    MKMapView *_mapView;
    MKMapCamera *_orbitCamera;
    BOOL _orbiting;
    UIColor *_pinTintColor;
    BOOL _renderingMap;
    BOOL _settingUpOrbitAnimation;
    BOOL _showsPin;
    float _zoomLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapCamera *orbitCamera;
@property (nonatomic) BOOL orbiting;
@property (nonatomic) UIColor *pinTintColor;
@property (nonatomic) BOOL settingUpOrbitAnimation;
@property (nonatomic) BOOL showsPin;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL useSatellite;
@property (nonatomic) float zoomLevel;

- (void).cxx_destruct;
- (void)_orbitNextThird;
- (void)beginOrbit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mapItem:(id)arg2;
- (void)mapFinishedLoading:(BOOL)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (id)orbitCamera;
- (BOOL)orbiting;
- (void)pause;
- (void)pauseOrbit;
- (id)pinTintColor;
- (void)prepareForPresentation;
- (void)present;
- (void)requestSnapshot;
- (void)reset;
- (void)resume;
- (void)setMapItem:(id)arg1;
- (void)setOrbitCamera:(id)arg1;
- (void)setOrbiting:(BOOL)arg1;
- (void)setPinTintColor:(id)arg1;
- (void)setSettingUpOrbitAnimation:(BOOL)arg1;
- (void)setShowsPin:(BOOL)arg1;
- (void)setZoomLevel:(float)arg1;
- (BOOL)settingUpOrbitAnimation;
- (BOOL)showsPin;
- (BOOL)useSatellite;
- (float)zoomLevel;

@end