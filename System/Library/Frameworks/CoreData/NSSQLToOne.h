//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;

__attribute__((visibility("hidden")))
@interface NSSQLToOne
{
    NSSQLForeignKey *_foreignKey;	// 64 = 0x40
    NSSQLForeignEntityKey *_foreignEntityKey;	// 72 = 0x48
    NSSQLForeignOrderKey *_foreignOrderKey;	// 80 = 0x50
    _Bool _isVirtual;	// 88 = 0x58
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x00000000001f9034
- (unsigned int)slot;	// IMP=0x00000000001f902a
- (id)description;	// IMP=0x00000000001f8f9d
- (id)columnName;	// IMP=0x00000000001f8f72
- (void)_setForeignOrderKey:(id)arg1;	// IMP=0x00000000001f8f34
- (id)foreignKey;	// IMP=0x00000000001f8f23
- (void)dealloc;	// IMP=0x00000000001f8ea6
- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;	// IMP=0x00000000001f8e97
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x00000000001f8e85
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x00000000001f8d85

@end

