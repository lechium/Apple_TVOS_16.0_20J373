//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebInterruptionObserverHelper : NSObject
{
    void *_callback;	// 8 = 0x8
}

- (void)interruption:(id)arg1;	// IMP=0x000000000003f2c0
- (void)clearCallback;	// IMP=0x000000000003f2b0
- (void)dealloc;	// IMP=0x000000000003f250
- (id)initWithCallback:(void *)arg1;	// IMP=0x000000000003f1a0

@end
