//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, ObjCReplica, ObjCVersion;

__attribute__((visibility("hidden")))
@interface CRTTMergeableString : NSObject
{
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> _orderedSubstrings;	// 8 = 0x8
    unsigned long long _editCount;	// 32 = 0x20
    _Bool _cacheInvalid;	// 40 = 0x28
    CRTTMergeableString *_renamedString;	// 48 = 0x30
    _Bool _hasLocalChanges;	// 56 = 0x38
    NSObject *_context;	// 64 = 0x40
    ObjCVersion *_version;	// 72 = 0x48
    ObjCVersion *_addedByVersion;	// 80 = 0x50
    id _attributedString;	// 88 = 0x58
    NSUUID *_uuid;	// 96 = 0x60
    long long _localCounter;	// 104 = 0x68
    ObjCReplica *_addedByReplica;	// 112 = 0x70
    long long _addedByLocalCounter;	// 120 = 0x78
    void *_startNode;	// 128 = 0x80
    void *_endNode;	// 136 = 0x88
    long long _renameGeneration;	// 144 = 0x90
    struct TopoReplica _replica;	// 152 = 0x98
}

- (id).cxx_construct;	// IMP=0x000000000001039c
- (void).cxx_destruct;	// IMP=0x0000000000010327
@property(nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
@property(nonatomic) void *endNode; // @synthesize endNode=_endNode;
@property(nonatomic) void *startNode; // @synthesize startNode=_startNode;
@property(nonatomic) long long addedByLocalCounter; // @synthesize addedByLocalCounter=_addedByLocalCounter;
@property(readonly, nonatomic) ObjCReplica *addedByReplica; // @synthesize addedByReplica=_addedByReplica;
@property(nonatomic) long long localCounter; // @synthesize localCounter=_localCounter;
@property(readonly, nonatomic) struct TopoReplica replica; // @synthesize replica=_replica;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property(retain, nonatomic) id attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) ObjCVersion *addedByVersion; // @synthesize addedByVersion=_addedByVersion;
@property(retain, nonatomic) ObjCVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSObject *context; // @synthesize context=_context;
- (void)finalizeTimestamps:(id)arg1;	// IMP=0x0000000000010165
- (_Bool)needToFinalizeTimestamps;	// IMP=0x00000000000100c5
- (void)applyRenamesAndRetainOrRelease:(id)arg1 context:(id)arg2;	// IMP=0x000000000000ff92
- (id)renamedIfAvailable;	// IMP=0x000000000000ff48
- (id)fullyRenamed:(id)arg1;	// IMP=0x000000000000fd00
- (id)temporaryConcurrentNames;	// IMP=0x000000000000fbc9
- (id)temporaryNamesExcludingSelf:(_Bool)arg1;	// IMP=0x000000000000f87b
- (id)renamed:(id)arg1;	// IMP=0x000000000000f6be
- (void)applyTimestampRenames:(id)arg1;	// IMP=0x000000000000f204
- (void)_apply:(id)arg1;	// IMP=0x000000000000ee77
- (void)apply:(id)arg1 skipRetain:(_Bool)arg2;	// IMP=0x000000000000ec45
- (void)useRenameIfAvailable;	// IMP=0x000000000000eb51
- (id)dotDescription:(unsigned long long)arg1;	// IMP=0x000000000000e3fa
- (_Bool)graphIsEqual:(id)arg1;	// IMP=0x000000000000ddb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000dd0a
- (id)description;	// IMP=0x000000000000dc50
- (void)traverseUnordered:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dc3b
- (void)sortSplitNodes;	// IMP=0x000000000000dbf8
- (_Bool)deltaMerge:(id)arg1;	// IMP=0x000000000000d4ee
- (_Bool)canDeltaMerge:(id)arg1;	// IMP=0x000000000000d2cf
- (unsigned long long)mergeWithString:(id)arg1;	// IMP=0x000000000000c04e
- (_Bool)hasDeltaTo:(id)arg1 compareElements:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b6ad
- (_Bool)canMergeString:(id)arg1;	// IMP=0x000000000000b4f8
- (void)coalesce;	// IMP=0x000000000000b18b
- (void)updateSubstringIndexes;	// IMP=0x000000000000b14e
- (void)updateAttributedStringAfterMerge;	// IMP=0x000000000000b061
- (void)invalidateCache;	// IMP=0x000000000000b04f
- (void)_updateCache;	// IMP=0x000000000000adf4
- (long long)substringCount;	// IMP=0x000000000000add3
- (void *)orderedSubstrings;	// IMP=0x000000000000ad6c
- (void *)splitTopoSubstring:(void *)arg1 atIndex:(unsigned int)arg2;	// IMP=0x000000000000aceb
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ac53
- (unsigned long long)characterIndexForIndex:(id)arg1;	// IMP=0x000000000000ab0a
- (unsigned long long)_characterIndexForIndex:(id)arg1;	// IMP=0x000000000000a9a1
- (id)mergeableIndexForCharacterIndex:(long long)arg1 affinity:(unsigned long long)arg2;	// IMP=0x000000000000a706
- (void)enumerateIndexes:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a5c3
- (void)getCharacterRanges:(void *)arg1 forSubstrings:(void *)arg2;	// IMP=0x000000000000a3ae
- (void)getSubstrings:(void *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;	// IMP=0x0000000000009dde
- (void *)getSubstringBeforeTopoID:(struct TopoID)arg1;	// IMP=0x0000000000009ca1
- (void)getSubstrings:(void *)arg1 inOrderedSubstrings:(void *)arg2 forCharacterRange:(struct _NSRange)arg3;	// IMP=0x0000000000009853
- (void)getSubstrings:(void *)arg1 forCharacterRange:(struct _NSRange)arg2;	// IMP=0x00000000000097ff
- (void)insertStorageLength:(long long)arg1 after:(void *)arg2 before:(void *)arg3 getStorage:(CDUnknownBlockType)arg4;	// IMP=0x00000000000090e4
- (void)deleteSubstrings:(void *)arg1 withCharacterRanges:(void *)arg2;	// IMP=0x0000000000008fe9
- (void)addNewAddedByFor:(void *)arg1;	// IMP=0x0000000000008e9d
@property(readonly, nonatomic) _Bool isEmptyCRDT;
- (id)characterRangesForIDRange:(struct TopoIDRange)arg1;	// IMP=0x0000000000008b97
- (id)characterRangesForMergeableRange:(id)arg1;	// IMP=0x000000000000846f
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007e59
- (id)characterRangesForSelection:(id)arg1;	// IMP=0x0000000000007e35
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;	// IMP=0x00000000000078da
- (id)selectionForCharacterRanges:(id)arg1;	// IMP=0x00000000000078b6
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000007830
- (void)endEditing;	// IMP=0x000000000000780a
- (void)beginEditing;	// IMP=0x0000000000007800
- (void)insertAtIndex:(long long)arg1 length:(long long)arg2 getStorage:(CDUnknownBlockType)arg3;	// IMP=0x000000000000761a
- (void)removeAll;	// IMP=0x0000000000007552
- (void)removeObjectsInRange:(struct _NSRange)arg1;	// IMP=0x000000000000745e
- (void)replaceStorageInRange:(struct _NSRange)arg1 withStorage:(id)arg2;	// IMP=0x0000000000007310
- (unsigned long long)length;	// IMP=0x00000000000072b8
- (id)objcReplica;	// IMP=0x00000000000072a7
- (id)copyRenamedIfAvailable:(_Bool)arg1;	// IMP=0x0000000000006a55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006a3e
- (void)deleteAllSubstrings;	// IMP=0x00000000000068cb
- (void)dealloc;	// IMP=0x00000000000067f9
- (id)initWithStorage:(id)arg1 uuid:(id)arg2 createInitialNodes:(_Bool)arg3;	// IMP=0x000000000000638f
- (id)initWithStorage:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000006376
- (_Bool)saveSubstrings:(void *)arg1 encoder:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000003110
- (_Bool)saveToEncoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000309f
- (id)initWithDecoder:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002844
- (void)_deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;	// IMP=0x000000000001abb7
- (void)deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3 same:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a9e9
- (void)deltaTo:(id)arg1 edited:(CDUnknownBlockType)arg2 unedited:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a10b
- (id)undoCommandToChangeTo:(id)arg1 unedited:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019a95
- (void)undeleteSubstrings:(void *)arg1;	// IMP=0x0000000000019770

@end
