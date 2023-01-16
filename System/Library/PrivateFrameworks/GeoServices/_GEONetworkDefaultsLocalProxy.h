//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, geo_isolater;
@protocol _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsLocalProxy : NSObject
{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;	// 8 = 0x8
    geo_isolater *_isolation;	// 16 = 0x10
    NSMutableArray *_updateCompletionHandlers;	// 24 = 0x18
    unsigned long long _stateCaptureHandle;	// 32 = 0x20
    double _lastAttempt;	// 40 = 0x28
    int _missingContainerRetryCount;	// 48 = 0x30
    _Bool _activelyUpdating;	// 52 = 0x34
    struct atomic_flag _isWaiting;	// 53 = 0x35
}

- (void).cxx_destruct;	// IMP=0x0000000000d1aab1
@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;	// IMP=0x0000000000d1a859
- (_Bool)_updateWithNewConfig:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000d19ead
- (void)_callCompletionHandlersWithError:(id)arg1;	// IMP=0x0000000000d19c75
- (void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4;	// IMP=0x0000000000d19806
- (id)_urlRequestForNetworkDefaults;	// IMP=0x0000000000d1954d
- (void)_updateNetworkDefaults;	// IMP=0x0000000000d18fef
- (void)updateNetworkDefaultsWithReason:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d18ad3
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;	// IMP=0x0000000000d18ab9
- (id)init;	// IMP=0x0000000000d186a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

