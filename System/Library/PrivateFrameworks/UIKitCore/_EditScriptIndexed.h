//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _EditScriptIndexedAtom;

__attribute__((visibility("hidden")))
@interface _EditScriptIndexed
{
    _EditScriptIndexedAtom *_currentScriptAtom;	// 48 = 0x30
}

+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(_Bool)arg3 operationPrecedence:(long long)arg4;	// IMP=0x00000000009c3af7
+ (id)editScriptFromArray:(id)arg1 toArray:(id)arg2;	// IMP=0x00000000009c3adb
- (void).cxx_destruct;	// IMP=0x00000000009c4283
- (void)finalizeCurrentScriptAtom;	// IMP=0x00000000009c4008
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x00000000009c3efb
- (void)initializeCurrentScriptAtom;	// IMP=0x00000000009c3eda
- (id)applyToArray:(id)arg1;	// IMP=0x00000000009c3bb4
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(_Bool)arg5;	// IMP=0x00000000009c39f5

@end

