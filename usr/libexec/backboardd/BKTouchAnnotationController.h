//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchAnnotationController : NSObject
{
    _Bool _shouldVisualizeTouches;	// 8 = 0x8
    _Bool _shouldVisualizeHitTestRegions;	// 9 = 0x9
    BKDisplayAnnotationController *_displayAnnotationController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)workQueue;	// IMP=0x002000000001fa4d
- (void).cxx_destruct;	// IMP=0x002000000001eea0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) BKDisplayAnnotationController *displayAnnotationController; // @synthesize displayAnnotationController=_displayAnnotationController;
- (void)_queue_touchWasSoftCanceled:(unsigned int)arg1;	// IMP=0x001000000001ec72
- (void)_queue_touchWasHardCanceled:(unsigned int)arg1;	// IMP=0x001000000001ebb6
- (void)_queue_setCenter:(struct CGPoint)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x001000000001ea60
- (id)_keyPathForTouchIdentifier:(unsigned int)arg1;	// IMP=0x001000000001ea3c
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x001000000001e9c3
- (id)_stringDescribingContextID:(unsigned int)arg1 clientPort:(unsigned int)arg2;	// IMP=0x001000000001e8a9
- (id)_stringDescribingPID:(int)arg1;	// IMP=0x001000000001e794
- (id)_stringByRemovingPrefix:(id)arg1 fromString:(id)arg2;	// IMP=0x001000000001e6d9
- (void)_queue_annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x001000000001e422
- (void)_queue_annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x001000000001e407
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x001000000001e37c
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x001000000001e376
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x001000000001e370
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x001000000001e322
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x001000000001e2cd
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x001000000001e27f
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeOutAtPoint:(struct CGPoint)arg3;	// IMP=0x001000000001e231
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 upAtPoint:(struct CGPoint)arg3 detached:(_Bool)arg4;	// IMP=0x001000000001e1e3
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x001000000001e18b
- (void)touchDidTransfer:(unsigned int)arg1 destination:(id)arg2;	// IMP=0x001000000001e0f4
- (void)touchDidDetach:(unsigned int)arg1 destinations:(id)arg2;	// IMP=0x001000000001e0a6
- (void)touch:(unsigned int)arg1 didHitTestToDestination:(id)arg2 hostingChainIndex:(long long)arg3;	// IMP=0x001000000001e008
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 downAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x001000000001dfa8
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 rangeInAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x001000000001df4c
- (void)_queue_applyBasicAnnotationTextForTouchIdentifier:(unsigned int)arg1 pathIndex:(long long)arg2;	// IMP=0x001000000001dde0
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x001000000001dd12
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x000000000001dc4f
- (void)annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x001000000001dbb8
@property _Bool shouldVisualizeHitTestRegions;
@property _Bool shouldVisualizeTouches;
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x001000000001d929

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

