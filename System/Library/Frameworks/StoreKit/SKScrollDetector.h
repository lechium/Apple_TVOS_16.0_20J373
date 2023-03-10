//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol SKScreenTrackingDelegate;

__attribute__((visibility("hidden")))
@interface SKScrollDetector : NSObject
{
    id <SKScreenTrackingDelegate> _screenTrakingDelegate;	// 8 = 0x8
    NSMutableArray *_subscribedScrollers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000026b10
@property(retain, nonatomic) NSMutableArray *subscribedScrollers; // @synthesize subscribedScrollers=_subscribedScrollers;
@property(nonatomic) __weak id <SKScreenTrackingDelegate> screenTrakingDelegate; // @synthesize screenTrakingDelegate=_screenTrakingDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000265f8
- (void)stopListeningForScrollingOfView:(id)arg1;	// IMP=0x0000000000026328
- (void)findAndListenForScrollingOfView:(id)arg1;	// IMP=0x0000000000026013
- (void)dealloc;	// IMP=0x0000000000025e1e
- (id)init;	// IMP=0x0000000000025e0a
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000025d8c

@end

