/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {
    BOOL  _boolPredicateValue;
    NSData * _bytesPredicateValue;
    double  _doublePredicateValue;
    float  _floatPredicateValue;
    struct { 
        unsigned int doublePredicateValue : 1; 
        unsigned int integerPredicateValue : 1; 
        unsigned int floatPredicateValue : 1; 
        unsigned int boolPredicateValue : 1; 
    }  _has;
    long long  _integerPredicateValue;
    NSString * _stringPredicateValue;
    int  _type;
}

@property (nonatomic) BOOL boolPredicateValue;
@property (nonatomic, retain) NSData *bytesPredicateValue;
@property (nonatomic) double doublePredicateValue;
@property (nonatomic) float floatPredicateValue;
@property (nonatomic) BOOL hasBoolPredicateValue;
@property (nonatomic, readonly) BOOL hasBytesPredicateValue;
@property (nonatomic) BOOL hasDoublePredicateValue;
@property (nonatomic) BOOL hasFloatPredicateValue;
@property (nonatomic) BOOL hasIntegerPredicateValue;
@property (nonatomic, readonly) BOOL hasStringPredicateValue;
@property (nonatomic) long long integerPredicateValue;
@property (nonatomic, retain) NSString *stringPredicateValue;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (BOOL)boolPredicateValue;
- (id)bytesPredicateValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doublePredicateValue;
- (float)floatPredicateValue;
- (BOOL)hasBoolPredicateValue;
- (BOOL)hasBytesPredicateValue;
- (BOOL)hasDoublePredicateValue;
- (BOOL)hasFloatPredicateValue;
- (BOOL)hasIntegerPredicateValue;
- (BOOL)hasStringPredicateValue;
- (unsigned int)hash;
- (long long)integerPredicateValue;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBoolPredicateValue:(BOOL)arg1;
- (void)setBytesPredicateValue:(id)arg1;
- (void)setDoublePredicateValue:(double)arg1;
- (void)setFloatPredicateValue:(float)arg1;
- (void)setHasBoolPredicateValue:(BOOL)arg1;
- (void)setHasDoublePredicateValue:(BOOL)arg1;
- (void)setHasFloatPredicateValue:(BOOL)arg1;
- (void)setHasIntegerPredicateValue:(BOOL)arg1;
- (void)setIntegerPredicateValue:(long long)arg1;
- (void)setStringPredicateValue:(id)arg1;
- (void)setType:(int)arg1;
- (id)stringPredicateValue;
- (int)type;
- (void)writeTo:(id)arg1;

@end
