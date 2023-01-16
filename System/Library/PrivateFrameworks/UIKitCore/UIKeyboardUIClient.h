//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol BSServiceConnectionClient, UIKeyboardUIServiceProtocol;

__attribute__((visibility("hidden")))
@interface UIKeyboardUIClient : NSObject
{
    BSServiceConnection<BSServiceConnectionClient> *_connection;	// 8 = 0x8
    id <UIKeyboardUIServiceProtocol> _remoteTarget;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0060000000b3f440
+ (id)serviceInterface;	// IMP=0x0060000000b3f31a
- (void).cxx_destruct;	// IMP=0x0000000000b3fe41
- (void)setKeyboardAlpha:(double)arg1;	// IMP=0x0000000000b3fded
- (id)snapshotViewForOptions:(unsigned long long)arg1;	// IMP=0x0000000000b3fc5e
- (void)_initConnectionIfNeeded;	// IMP=0x0000000000b3f535
- (void)dealloc;	// IMP=0x0000000000b3f4e1
- (id)init;	// IMP=0x0000000000b3f495

@end
