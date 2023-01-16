//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnectionEndpoint, NSDictionary, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _LSSpringBoardCall : NSObject
{
    NSString *_schemeIfNotFileURL;	// 8 = 0x8
    _Bool _callCompletionHandlerWhenFullyComplete;	// 16 = 0x10
    NSDictionary *_launchOptions;	// 24 = 0x18
    BSServiceConnectionEndpoint *_targetServiceConnectionEndpoint;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    NSXPCConnection *_clientXPCConnection;	// 48 = 0x30
}

+ (id)springBoardDeadlockPreventionQueue;	// IMP=0x0010000000122679
+ (id)springBoardQueue;	// IMP=0x00100000001225f8
- (void).cxx_destruct;	// IMP=0x00000000001225af
@property _Bool callCompletionHandlerWhenFullyComplete; // @synthesize callCompletionHandlerWhenFullyComplete=_callCompletionHandlerWhenFullyComplete;
@property(retain) NSXPCConnection *clientXPCConnection; // @synthesize clientXPCConnection=_clientXPCConnection;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) BSServiceConnectionEndpoint *targetServiceConnectionEndpoint; // @synthesize targetServiceConnectionEndpoint=_targetServiceConnectionEndpoint;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001223f1
- (id)debugDescription;	// IMP=0x00000000001222b8
- (void)callWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122032
@property(copy) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void)promptAndCallSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123634
- (void)lieWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001234fe
- (void)callSpringBoardWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001226fa

@end

