//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTModifyUserControllableViewStatusOperation
{
    int _intendedViewStatus;	// 12 = 0xc
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSString<OctagonStateString> *_peerMissingState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000025bd3
@property int intendedViewStatus; // @synthesize intendedViewStatus=_intendedViewStatus;
@property(retain) NSString<OctagonStateString> *peerMissingState; // @synthesize peerMissingState=_peerMissingState;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)performWithStatus:(int)arg1;	// IMP=0x001000000002589c
- (void)groupStart;	// IMP=0x0010000000025857
- (id)initWithDependencies:(id)arg1 intendedViewStatus:(int)arg2 intendedState:(id)arg3 peerMissingState:(id)arg4 errorState:(id)arg5;	// IMP=0x0010000000025757

@end

