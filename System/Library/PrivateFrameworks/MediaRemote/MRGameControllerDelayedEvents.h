//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MRGameControllerDelayedEvents : NSObject
{
    NSMutableDictionary *_events;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000022a68e
- (void)invokeEventsForController:(unsigned long long)arg1 beacuseElement:(int)arg2;	// IMP=0x000000000022a555
- (id)eventForController:(unsigned long long)arg1 element:(int)arg2;	// IMP=0x000000000022a3ad

@end

