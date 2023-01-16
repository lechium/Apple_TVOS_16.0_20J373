//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKURLSessionTaskDelegate : NSObject
{
    ObjectIdentifier_086a6a69 _identifier;	// 8 = 0x8
    struct WeakPtr<WebKit::NetworkSessionCocoa, WTF::EmptyCounter> _session;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000000d4fab
- (void).cxx_destruct;	// IMP=0x00000000000d4f7f
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000000d4cc0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000000d4b38
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d47c9
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d43a1
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d3ffb
- (void *)connection;	// IMP=0x00000000000d3fd7
- (id)initWithIdentifier:(ObjectIdentifier_086a6a69)arg1 session:(void *)arg2;	// IMP=0x00000000000d3f51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

