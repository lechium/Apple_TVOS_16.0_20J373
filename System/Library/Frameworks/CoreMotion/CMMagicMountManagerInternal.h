//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface CMMagicMountManagerInternal : NSObject
{
    struct CMMagicMountStateStruct _currentMagicMountState;	// 8 = 0x8
    CDUnknownBlockType _magicMountStateHandler;	// 24 = 0x18
    NSOperationQueue *_magicMountStateQueue;	// 32 = 0x20
    struct Dispatcher *_magicMountStateDispatcher;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000001d2fc4
- (id)init;	// IMP=0x00000000001d2f81

@end
