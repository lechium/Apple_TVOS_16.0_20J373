//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTFetchViewsOperation
{
    _Bool _isInheritedAccount;	// 10 = 0xa
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000010ad6b
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property _Bool isInheritedAccount; // @synthesize isInheritedAccount=_isInheritedAccount;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x001000000010a9d8
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3;	// IMP=0x001000000010a912

@end

