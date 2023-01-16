//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TCCDProcess;

@interface TCCDAttributionChain : NSObject
{
    _Bool _accessingProcessSpecified;	// 8 = 0x8
    _Bool _accessingProcessIsValid;	// 9 = 0x9
    _Bool _responsibleProcessIsValid;	// 10 = 0xa
    _Bool _responsibleProcessIsDistinct;	// 11 = 0xb
    TCCDProcess *_accessingProcess;	// 16 = 0x10
    TCCDProcess *_responsibleProcess;	// 24 = 0x18
    TCCDProcess *_requestingProcess;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000003af0f
@property _Bool responsibleProcessIsDistinct; // @synthesize responsibleProcessIsDistinct=_responsibleProcessIsDistinct;
@property(readonly) _Bool responsibleProcessIsValid; // @synthesize responsibleProcessIsValid=_responsibleProcessIsValid;
@property _Bool accessingProcessIsValid; // @synthesize accessingProcessIsValid=_accessingProcessIsValid;
@property _Bool accessingProcessSpecified; // @synthesize accessingProcessSpecified=_accessingProcessSpecified;
@property(retain) TCCDProcess *requestingProcess; // @synthesize requestingProcess=_requestingProcess;
- (id)attributedBundleUsingOutermostBundle:(_Bool)arg1 computedStaticCodeRef:(const void **)arg2 computedNonIdentifiableBundleURL:(id *)arg3;	// IMP=0x001000000003abb3
@property(readonly) TCCDProcess *responsibleProcess; // @synthesize responsibleProcess=_responsibleProcess;
@property(readonly) TCCDProcess *accessingProcess; // @synthesize accessingProcess=_accessingProcess;
- (id)description;	// IMP=0x001000000003a9b0
- (id)initWithMessage:(id)arg1 evaluateResponsibility:(_Bool)arg2 processInfo:(id)arg3;	// IMP=0x001000000003a3ab
- (id)createProcessFromAuditToken:(CDStruct_4c969caf)arg1 processInfo:(id)arg2;	// IMP=0x001000000003a367
- (void)getAuditToken:(CDStruct_4c969caf *)arg1 fromMessage:(id)arg2;	// IMP=0x001000000003a357
- (id)initWithMessage:(id)arg1 evaluateResponsibility:(_Bool)arg2;	// IMP=0x001000000003a342
- (id)initWithMessage:(id)arg1;	// IMP=0x001000000003a32b

@end

