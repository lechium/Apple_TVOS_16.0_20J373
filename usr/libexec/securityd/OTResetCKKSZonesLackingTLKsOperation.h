//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTResetCKKSZonesLackingTLKsOperation
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSOperation *_finishedOp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000cbb1d
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)resetViews:(id)arg1;	// IMP=0x00100000000cb7da
- (MISSING_TYPE *)proceedWithKeys:incompleteKeySets: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000cb34a
- (void)groupStart;	// IMP=0x00100000000cb0a4
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x00100000000cafde

@end

