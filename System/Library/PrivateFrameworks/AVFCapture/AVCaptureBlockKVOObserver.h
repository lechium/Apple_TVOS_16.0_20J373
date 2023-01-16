//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVCaptureBlockKVOObserver : NSObject
{
    NSObject *_object;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000003133
- (void)dealloc;	// IMP=0x00000000000030ca
- (id)initWithObjectToObserve:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000003028

@end

