/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiMetricWiFiTetheredDeviceOUI : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    NSData *_tetheredOUI;
    unsigned long long _timestamp;
}

@property (nonatomic, readonly) BOOL hasTetheredOUI;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSData *tetheredOUI;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTetheredOUI;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTetheredOUI:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)tetheredOUI;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
