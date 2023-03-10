//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _PFExternalReferenceData : NSData
{
    NSData *_originalData;	// 8 = 0x8
    void *_bytesPtrForStore;	// 16 = 0x10
    unsigned long long _bytesLengthForStore;	// 24 = 0x18
    void *_bytesPtrForExternalReference;	// 32 = 0x20
    unsigned long long _bytesLengthForExternalReference;	// 40 = 0x28
    NSString *_externalReferenceLocation;	// 48 = 0x30
    NSString *_safeguardLocation;	// 56 = 0x38
    id _ubiquitousLocation;	// 64 = 0x40
    struct __externalDataFlags {
        unsigned int _isStoredExternally:1;
        unsigned int _hasMappedData:1;
        unsigned int _cleanupOnDealloc:1;
        unsigned int _dataProtectionLevel:3;
        unsigned int _isStoredUbiquitously:1;
        unsigned int _createdByUbiquityImport:1;
        unsigned int _reserved:24;
    } _externalDataFlags;	// 72 = 0x48
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x001000000022e699
- (_Bool)_createdByUbiquityImport;	// IMP=0x000000000022f3f6
- (_Bool)isEqualToData:(id)arg1;	// IMP=0x000000000022f328
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022f2e0
- (id)subdataWithRange:(struct _NSRange)arg1;	// IMP=0x000000000022f06b
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000022ef10
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000022eef9
- (void)doCleanupOnDealloc;	// IMP=0x000000000022eee8
- (id)UUID;	// IMP=0x000000000022eecb
- (id)databaseValue;	// IMP=0x000000000022ee99
- (id)externalReferenceLocationString;	// IMP=0x000000000022ee7b
- (int)preferredProtectionLevel;	// IMP=0x000000000022ee65
- (id)_safeguardLocationString;	// IMP=0x000000000022ee47
- (const char *)_safeguardLocation;	// IMP=0x000000000022ee2a
- (const char *)_externalReferenceLocation;	// IMP=0x000000000022ee0d
- (unsigned long long)_bytesLengthForExternalReference;	// IMP=0x000000000022edfc
- (const void *)_bytesPtrForExternalReference;	// IMP=0x000000000022edf2
- (unsigned long long)_bytesLengthForStore;	// IMP=0x000000000022ede1
- (const void *)_bytesPtrForStore;	// IMP=0x000000000022edd0
- (unsigned long long)length;	// IMP=0x000000000022edbe
- (const void *)bytes;	// IMP=0x000000000022edb4
- (id)description;	// IMP=0x000000000022ed3f
- (_Bool)hasExternalReferenceContent;	// IMP=0x000000000022ed2d
- (void)_deleteExternalReferenceFromPermanentLocation;	// IMP=0x000000000022ed0a
- (void)_moveExternalReferenceToPermanentLocation;	// IMP=0x000000000022ec84
- (void)_writeExternalReferenceToInterimLocation;	// IMP=0x000000000022ec5c
- (void)_setBytesForExternalReference:(const void *)arg1;	// IMP=0x000000000022e859
- (id)_originalData;	// IMP=0x000000000022e848
- (id)mutableCopy;	// IMP=0x000000000022e7f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022e7e2
- (id)copy;	// IMP=0x000000000022e7d7
- (void)dealloc;	// IMP=0x000000000022e6aa
- (Class)classForCoder;	// IMP=0x000000000022e688
- (id)initWithStoreBytes:(const void *)arg1 length:(unsigned long long)arg2 externalLocation:(id)arg3 safeguardLocation:(id)arg4 protectionLevel:(int)arg5;	// IMP=0x000000000022e50f
- (id)initForExternalLocation:(id)arg1 safeguardLocation:(id)arg2 data:(id)arg3 protectionLevel:(int)arg4;	// IMP=0x000000000022e2b1
- (id)initForUbiquityDictionary:(id)arg1 store:(id)arg2;	// IMP=0x000000000022df63

@end

