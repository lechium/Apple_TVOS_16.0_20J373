//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKReloadFrameErrorRecoveryAttempter : NSObject
{
    struct WeakObjCPtr<WKWebView> _webView;	// 8 = 0x8
    struct RetainPtr<_WKFrameHandle> _frameHandle;	// 16 = 0x10
    struct String _urlString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002fbae7
- (id).cxx_construct;	// IMP=0x00000000002fbb41
- (void).cxx_destruct;	// IMP=0x00000000002fbaef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fbab8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002fbab2
- (_Bool)attemptRecovery;	// IMP=0x00000000002fb9b1
- (id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const void *)arg3;	// IMP=0x00000000002fb926

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
