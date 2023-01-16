//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKAnnotationView, MKPinAnnotationView, MKPriorityToIndexMap, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol MKAnnotationContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotationContainerView : UIView
{
    NSMutableOrderedSet *_annotationViews;	// 8 = 0x8
    NSMutableDictionary *_clusteringAnnotationViews;	// 16 = 0x10
    NSMutableArray *_customFeatureDataSourceObservers;	// 24 = 0x18
    NSMutableArray *_awaitingDropPins;	// 32 = 0x20
    MKAnnotationView *_selectedAnnotationView;	// 40 = 0x28
    MKAnnotationView *_annotationViewToSelect;	// 48 = 0x30
    id <MKAnnotationContainerViewDelegate> _delegate;	// 56 = 0x38
    MKAnnotationView *_draggingAnnotationView;	// 64 = 0x40
    struct CGPoint _previousMouseDragPoint;	// 72 = 0x48
    double _previousMouseDragTimeStamp;	// 88 = 0x58
    struct CGPoint _mouseDownPoint;	// 96 = 0x60
    struct CGPoint _draggingAnnotationViewCenter;	// 112 = 0x70
    unsigned long long _mapType;	// 128 = 0x80
    _Bool _clickedOnAnnotationView;	// 136 = 0x88
    _Bool _didDragAnnotationView;	// 137 = 0x89
    MKAnnotationView *_userLocationView;	// 144 = 0x90
    double _annotationViewsRotationRadians;	// 152 = 0x98
    struct CGAffineTransform _mapTransform;	// 160 = 0xa0
    _Bool _suppressCallout;	// 208 = 0xd0
    NSMutableArray *_pinsToAnimate;	// 216 = 0xd8
    double _mapPitchRadians;	// 224 = 0xe0
    CDStruct_80aa614a _mapDisplayStyle;	// 232 = 0xe8
    _Bool _mapFocused;	// 237 = 0xed
    _Bool _parallaxEnabled;	// 238 = 0xee
    _Bool _suppress;	// 239 = 0xef
    _Bool _isUpdating;	// 240 = 0xf0
    double _lastUpdate;	// 248 = 0xf8
    NSMutableDictionary *_clusterableAnnotationViews;	// 256 = 0x100
    NSMutableArray *_requiredPriorityAnnotationViews;	// 264 = 0x108
    NSMutableSet *_collidableAnnotationViews;	// 272 = 0x110
    NSMutableDictionary *_collidingAnnotationViews;	// 280 = 0x118
    NSMutableDictionary *_existingClusterAnnotationViews;	// 288 = 0x120
    MKPriorityToIndexMap *_priorityMap;	// 296 = 0x128
    NSMutableSet *_prioritiesToAdd;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x00000000001aaf28
@property(readonly, nonatomic) MKAnnotationView *draggingAnnotationView; // @synthesize draggingAnnotationView=_draggingAnnotationView;
@property(nonatomic) _Bool suppressCallout; // @synthesize suppressCallout=_suppressCallout;
- (void)updateAnnotationViewsWithDelay;	// IMP=0x00000000001aaef0
- (void)_performStateUpdatesIfNeeded;	// IMP=0x00000000001aad41
- (void)_updateCollidableAnnotationViews;	// IMP=0x00000000001aa77f
- (void)_updateClusterableAnnotationViews:(id)arg1 withID:(id)arg2;	// IMP=0x00000000001a9b96
- (id)_existingClusterViewsForClusterID:(id)arg1;	// IMP=0x00000000001a9acf
- (_Bool)_updateAnnotationViewPositions;	// IMP=0x00000000001a9ab2
- (void)stopSuppressingUpdates;	// IMP=0x00000000001a9aa1
- (void)suppressUpdates;	// IMP=0x00000000001a9a70
- (_Bool)_updateAnnotationViews:(id)arg1;	// IMP=0x00000000001a96e3
- (void)_updateAnnotationView:(id)arg1;	// IMP=0x00000000001a965a
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001a9582
- (CDStruct_02837cd9)_mapRectWithFraction:(double)arg1 ofVisible:(CDStruct_02837cd9)arg2;	// IMP=0x00000000001a94c2
- (void)transitionTo:(long long)arg1;	// IMP=0x00000000001a938d
- (_Bool)_updatePriorityMapIfNeeded;	// IMP=0x00000000001a9321
- (void)_addPrioritiesForAnnotationViewIfNeeded:(id)arg1;	// IMP=0x00000000001a919b
- (void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x00000000001a8fe4
- (void)annotationViewDidChangeMetrics:(id)arg1;	// IMP=0x00000000001a8faf
- (void)annotationViewDidChangeHidden:(id)arg1;	// IMP=0x00000000001a8dc2
- (void)annotationViewDidChangeZPriority:(id)arg1;	// IMP=0x00000000001a8bf0
@property(readonly, nonatomic) CDStruct_089f5ccb currentComparisonContext;
- (void)selectAnnotationView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001a891b
- (void)dropPinsIfNeeded;	// IMP=0x00000000001a8904
- (void)removeAnnotationView:(id)arg1;	// IMP=0x00000000001a8519
- (void)finishAddingAndRemovingAnnotationViews;	// IMP=0x00000000001a84e9
- (void)addAnnotationView:(id)arg1 allowAnimation:(_Bool)arg2;	// IMP=0x00000000001a7c34
- (void)_willRemoveInternalAnnotationView:(id)arg1;	// IMP=0x00000000001a7b92
- (void)_dropPinsIfNeeded:(_Bool)arg1;	// IMP=0x00000000001a7684
- (void)setUserLocationView:(id)arg1;	// IMP=0x00000000001a7557
@property(readonly, nonatomic) MKAnnotationView *userLocationView;
@property(readonly, nonatomic) _Bool hasPendingAnimations;
@property(readonly, nonatomic) _Bool hasDroppingPins;
- (struct UIEdgeInsets)accessoryPadding;	// IMP=0x00000000001a73c5
- (void)pinDidDrop:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001a72d0
- (void)_dropDraggingAnnotationViewAnimated:(_Bool)arg1;	// IMP=0x00000000001a70a3
- (struct CGPoint)draggingAnnotationViewDropPointForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001a7059
- (struct CGPoint)draggingAnnotationViewDropPoint;	// IMP=0x00000000001a6f7d
- (void)draggingTouchMovedToPoint:(struct CGPoint)arg1 edgeInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000001a6dc7
- (void)_draggingAnnotationViewDidPause:(id)arg1;	// IMP=0x00000000001a6d80
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint)arg2;	// IMP=0x00000000001a6c68
- (id)annotationViewForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001a6c4c
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(_Bool)arg2 maxDistance:(double)arg3;	// IMP=0x00000000001a6768
@property(readonly, nonatomic) NSMutableOrderedSet *annotationViews;
- (void)updateUserLocationView;	// IMP=0x00000000001a672f
- (void)updateAnnotationView:(id)arg1;	// IMP=0x00000000001a671d
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000001a66b0
- (struct CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1;	// IMP=0x00000000001a6608
- (void)_updateAnnotationViewsForReason:(long long)arg1 updatePositions:(_Bool)arg2;	// IMP=0x00000000001a5fbf
- (void)updateAnnotationViewsForReason:(long long)arg1;	// IMP=0x00000000001a5fa8
- (void)deselectAnnotationView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001a5ee6
- (void)updateCalloutStateForSelectedAnnotationView:(id)arg1;	// IMP=0x00000000001a5e94
- (void)removeAnnotationViewsRotationAnimations;	// IMP=0x00000000001a5ce2
- (void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2;	// IMP=0x00000000001a5ba2
@property(readonly, nonatomic) MKPinAnnotationView *bubblePin;
- (void)visibleCenteringRectChanged;	// IMP=0x00000000001a5a28
- (struct CGRect)_visibleRect;	// IMP=0x00000000001a59c7
- (struct CGRect)_visibleCenteringRectInView:(id)arg1;	// IMP=0x00000000001a5951
- (struct CGRect)_visibleCenteringRect;	// IMP=0x00000000001a58f0
- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;	// IMP=0x00000000001a5809
- (_Bool)calloutsShouldHaveParallax;	// IMP=0x00000000001a57f9
- (_Bool)mapFocused;	// IMP=0x00000000001a57e9
- (void)setCalloutsShouldHaveParallax:(_Bool)arg1;	// IMP=0x00000000001a57d9
- (void)setMapFocused:(_Bool)arg1;	// IMP=0x00000000001a57c4
- (void)setMapDisplayStyle:(CDStruct_80aa614a)arg1;	// IMP=0x00000000001a5658
@property(nonatomic) unsigned long long mapType;
- (void)setMapPitchRadians:(double)arg1;	// IMP=0x00000000001a5396
@property(nonatomic) __weak id <MKAnnotationContainerViewDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000001a515a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a5010
- (id)globalAnnotations;	// IMP=0x00000000001ab546
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000001ab33b
- (unsigned char)sceneState;	// IMP=0x00000000001ab330
- (unsigned char)sceneID;	// IMP=0x00000000001ab328
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;	// IMP=0x00000000001ab322
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;	// IMP=0x00000000001ab31c
- (id)clusterStyleAttributes;	// IMP=0x00000000001ab314
- (_Bool)isClusteringEnabled;	// IMP=0x00000000001ab30c
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001ab2ef
- (void)addObserver:(id)arg1;	// IMP=0x00000000001ab275
- (void)invalidateCustomFeatureDataSource;	// IMP=0x00000000001ab1ad
- (void)invalidateCustomFeatureDataSourceRect:(CDStruct_02837cd9)arg1;	// IMP=0x00000000001ab056

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

