//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTSOSUpdatePreapprovalsOperation
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    NSString<OctagonStateString> *_sosNotPresentState;	// 32 = 0x20
    OTOperationDependencies *_deps;	// 40 = 0x28
    NSOperation *_finishedOp;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000ce32d
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *sosNotPresentState; // @synthesize sosNotPresentState=_sosNotPresentState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)groupStart;	// IMP=0x00100000000cdd7b
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 sosNotPresentState:(id)arg3 errorState:(id)arg4;	// IMP=0x00100000000cdc84

@end

