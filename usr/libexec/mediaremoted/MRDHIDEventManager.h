//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MRDHIDEventManager : NSObject
{
}

- (void)_dispatchKeypressEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2;	// IMP=0x0040000000013627
- (void)dispatchUnicodeEventWithText:(id)arg1;	// IMP=0x0010000000013550
- (void)dispatchKeypressEvent:(unsigned long long)arg1;	// IMP=0x0010000000013522
- (void)dispatchHomeButton;	// IMP=0x0010000000013506
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00100000000134da

@end

