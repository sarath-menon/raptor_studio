// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file Pose.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "Pose.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

idl_msg::Pose::Pose()
{
    // m_header com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@399f45b1

    // m_position com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@38c6f217

    // m_orientation_euler com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@478190fc

    // m_orientation_quat com.eprosima.fastdds.idl.parser.typecode.StructTypeCode@79e2c065


}

idl_msg::Pose::~Pose()
{




}

idl_msg::Pose::Pose(
        const Pose& x)
{
    m_header = x.m_header;
    m_position = x.m_position;
    m_orientation_euler = x.m_orientation_euler;
    m_orientation_quat = x.m_orientation_quat;
}

idl_msg::Pose::Pose(
        Pose&& x)
{
    m_header = std::move(x.m_header);
    m_position = std::move(x.m_position);
    m_orientation_euler = std::move(x.m_orientation_euler);
    m_orientation_quat = std::move(x.m_orientation_quat);
}

idl_msg::Pose& idl_msg::Pose::operator =(
        const Pose& x)
{

    m_header = x.m_header;
    m_position = x.m_position;
    m_orientation_euler = x.m_orientation_euler;
    m_orientation_quat = x.m_orientation_quat;

    return *this;
}

idl_msg::Pose& idl_msg::Pose::operator =(
        Pose&& x)
{

    m_header = std::move(x.m_header);
    m_position = std::move(x.m_position);
    m_orientation_euler = std::move(x.m_orientation_euler);
    m_orientation_quat = std::move(x.m_orientation_quat);

    return *this;
}

size_t idl_msg::Pose::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getMaxCdrSerializedSize(current_alignment);
    current_alignment += idl_msg::Position::getMaxCdrSerializedSize(current_alignment);
    current_alignment += idl_msg::EulerAngleZYX::getMaxCdrSerializedSize(current_alignment);
    current_alignment += idl_msg::Quaternion::getMaxCdrSerializedSize(current_alignment);

    return current_alignment - initial_alignment;
}

size_t idl_msg::Pose::getCdrSerializedSize(
        const idl_msg::Pose& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += idl_msg::Header::getCdrSerializedSize(data.header(), current_alignment);
    current_alignment += idl_msg::Position::getCdrSerializedSize(data.position(), current_alignment);
    current_alignment += idl_msg::EulerAngleZYX::getCdrSerializedSize(data.orientation_euler(), current_alignment);
    current_alignment += idl_msg::Quaternion::getCdrSerializedSize(data.orientation_quat(), current_alignment);

    return current_alignment - initial_alignment;
}

void idl_msg::Pose::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_header;
    scdr << m_position;
    scdr << m_orientation_euler;
    scdr << m_orientation_quat;

}

void idl_msg::Pose::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_header;
    dcdr >> m_position;
    dcdr >> m_orientation_euler;
    dcdr >> m_orientation_quat;
}

/*!
 * @brief This function copies the value in member header
 * @param _header New value to be copied in member header
 */
void idl_msg::Pose::header(
        const idl_msg::Header& _header)
{
    m_header = _header;
}

/*!
 * @brief This function moves the value in member header
 * @param _header New value to be moved in member header
 */
void idl_msg::Pose::header(
        idl_msg::Header&& _header)
{
    m_header = std::move(_header);
}

/*!
 * @brief This function returns a constant reference to member header
 * @return Constant reference to member header
 */
const idl_msg::Header& idl_msg::Pose::header() const
{
    return m_header;
}

/*!
 * @brief This function returns a reference to member header
 * @return Reference to member header
 */
idl_msg::Header& idl_msg::Pose::header()
{
    return m_header;
}
/*!
 * @brief This function copies the value in member position
 * @param _position New value to be copied in member position
 */
void idl_msg::Pose::position(
        const idl_msg::Position& _position)
{
    m_position = _position;
}

/*!
 * @brief This function moves the value in member position
 * @param _position New value to be moved in member position
 */
void idl_msg::Pose::position(
        idl_msg::Position&& _position)
{
    m_position = std::move(_position);
}

/*!
 * @brief This function returns a constant reference to member position
 * @return Constant reference to member position
 */
const idl_msg::Position& idl_msg::Pose::position() const
{
    return m_position;
}

/*!
 * @brief This function returns a reference to member position
 * @return Reference to member position
 */
idl_msg::Position& idl_msg::Pose::position()
{
    return m_position;
}
/*!
 * @brief This function copies the value in member orientation_euler
 * @param _orientation_euler New value to be copied in member orientation_euler
 */
void idl_msg::Pose::orientation_euler(
        const idl_msg::EulerAngleZYX& _orientation_euler)
{
    m_orientation_euler = _orientation_euler;
}

/*!
 * @brief This function moves the value in member orientation_euler
 * @param _orientation_euler New value to be moved in member orientation_euler
 */
void idl_msg::Pose::orientation_euler(
        idl_msg::EulerAngleZYX&& _orientation_euler)
{
    m_orientation_euler = std::move(_orientation_euler);
}

/*!
 * @brief This function returns a constant reference to member orientation_euler
 * @return Constant reference to member orientation_euler
 */
const idl_msg::EulerAngleZYX& idl_msg::Pose::orientation_euler() const
{
    return m_orientation_euler;
}

/*!
 * @brief This function returns a reference to member orientation_euler
 * @return Reference to member orientation_euler
 */
idl_msg::EulerAngleZYX& idl_msg::Pose::orientation_euler()
{
    return m_orientation_euler;
}
/*!
 * @brief This function copies the value in member orientation_quat
 * @param _orientation_quat New value to be copied in member orientation_quat
 */
void idl_msg::Pose::orientation_quat(
        const idl_msg::Quaternion& _orientation_quat)
{
    m_orientation_quat = _orientation_quat;
}

/*!
 * @brief This function moves the value in member orientation_quat
 * @param _orientation_quat New value to be moved in member orientation_quat
 */
void idl_msg::Pose::orientation_quat(
        idl_msg::Quaternion&& _orientation_quat)
{
    m_orientation_quat = std::move(_orientation_quat);
}

/*!
 * @brief This function returns a constant reference to member orientation_quat
 * @return Constant reference to member orientation_quat
 */
const idl_msg::Quaternion& idl_msg::Pose::orientation_quat() const
{
    return m_orientation_quat;
}

/*!
 * @brief This function returns a reference to member orientation_quat
 * @return Reference to member orientation_quat
 */
idl_msg::Quaternion& idl_msg::Pose::orientation_quat()
{
    return m_orientation_quat;
}

size_t idl_msg::Pose::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;







    return current_align;
}

bool idl_msg::Pose::isKeyDefined()
{
    return false;
}

void idl_msg::Pose::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
        
}

